//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface UIPencilEvent : UIEvent
{
    NSHashTable *_trackedInteractions;
}

@property(retain, nonatomic) NSHashTable *trackedInteractions; // @synthesize trackedInteractions=_trackedInteractions;
- (long long)subtype;
- (long long)type;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (id)_init;

@end

