//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreUtils/CUByteCodable-Protocol.h>

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 error:(id )arg3;
- (id)encodedDataAndReturnError:(id )arg1;
- (const char )encodedBytesAndReturnLength:(NSUInteger )arg1 error:(id )arg2;
@end

