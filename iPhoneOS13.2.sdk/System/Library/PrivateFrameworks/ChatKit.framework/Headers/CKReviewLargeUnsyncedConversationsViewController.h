//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAbstractReviewViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController
{
    NSArray *_conversations;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
- (void)_populateConversationsIfNeeded;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfModelObjects;
- (void)reloadModelData;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;
- (id)navigationBarTitle;

@end

