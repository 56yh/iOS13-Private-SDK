//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject
{
    unsigned int _slotId;
    CAContext *_context;
}

@property(readonly, nonatomic) CAContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned int slotId; // @synthesize slotId=_slotId;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 slotId:(unsigned int)arg2;

@end

