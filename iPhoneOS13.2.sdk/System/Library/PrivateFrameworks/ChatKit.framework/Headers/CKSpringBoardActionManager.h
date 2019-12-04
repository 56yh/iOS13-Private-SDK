//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKContactsSearchManagerDelegate-Protocol.h>

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>
{
    _Bool shouldHideGroupsDonations;
    CKContactsSearchManager *_contactsSearchManager;
    NSArray *_conversationCache;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) CKContactsSearchManager *contactsSearchManager; // @synthesize contactsSearchManager=_contactsSearchManager;
@property(nonatomic) _Bool shouldHideGroupsDonations; // @synthesize shouldHideGroupsDonations;
- (void)chatStateChanged:(id)arg1;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)updateShortcutItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

