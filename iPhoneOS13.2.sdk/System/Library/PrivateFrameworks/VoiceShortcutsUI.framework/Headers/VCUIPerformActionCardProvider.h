//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUI/CRKIdentifiedProviding-Protocol.h>

@class NSString;

@interface VCUIPerformActionCardProvider : NSObject <CRKIdentifiedProviding>
{
}

- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
