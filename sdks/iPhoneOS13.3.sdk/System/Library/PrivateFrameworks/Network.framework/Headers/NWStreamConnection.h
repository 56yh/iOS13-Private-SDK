//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
{
}

+ (id)connectionWithConnectedSocket:(int)arg1;
- (BOOL)writeCloseWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)writeData:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)readDataWithMinimumLength:(NSUInteger)arg1 maximumLength:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;

@end

