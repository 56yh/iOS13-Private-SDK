//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsEvent.h>

#import <MetalTools/MTLSharedEvent-Protocol.h>

@class NSString;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>
{
}

@property(copy) NSString *label;
@property NSUInteger signaledValue;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(NSUInteger)arg2 block:(id /* CDUnknownBlockType */)arg3;

@end

