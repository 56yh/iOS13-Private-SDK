//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSString, SGSqlEntityStore;

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver>
{
    SGSqlEntityStore *_store;
}

@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void)removeAllStoredPseudoContacts;
- (void)rejectContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

