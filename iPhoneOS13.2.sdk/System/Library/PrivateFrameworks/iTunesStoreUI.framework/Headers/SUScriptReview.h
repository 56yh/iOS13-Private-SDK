//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, NSURL, SKUIReviewMetadata;

@interface SUScriptReview : SUScriptObject
{
    NSURL *_infoURL;
    SKUIReviewMetadata *_review;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(retain) NSString *title;
@property(retain) NSNumber *rating;
@property(retain) id nicknameIsConfirmed;
@property(retain) NSString *nickname;
@property(retain) NSString *itemType;
@property(retain) NSString *infoURL;
@property(retain) NSString *body;
@property(readonly) id hasSavedDraft;
- (id)_className;
@property(readonly) NSNumber *adamID;
- (id)saveAsDraft;
- (id)restoreFromDraft;
- (id)removeDraft;
- (id)copyReview;
- (void)dealloc;
- (id)initWithReview:(id)arg1;
- (id)init;

@end

