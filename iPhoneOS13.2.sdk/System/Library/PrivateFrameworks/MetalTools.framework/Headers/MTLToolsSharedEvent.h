//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsEvent.h>

#import <MetalTools/MTLSharedEvent-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>
{
}

@property(copy) NSString *label;
@property unsigned long long signaledValue;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

