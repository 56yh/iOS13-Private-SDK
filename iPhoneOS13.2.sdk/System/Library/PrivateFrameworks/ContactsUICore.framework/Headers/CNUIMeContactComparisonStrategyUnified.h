//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNMeContactComparisonStrategy-Protocol.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy>
{
    NSSet *_meContactIdentifiersFound;
}

@property(retain, nonatomic) NSSet *meContactIdentifiersFound; // @synthesize meContactIdentifiersFound=_meContactIdentifiersFound;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (id)meContactIdentifiers;
- (void)meContactChangedInStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

