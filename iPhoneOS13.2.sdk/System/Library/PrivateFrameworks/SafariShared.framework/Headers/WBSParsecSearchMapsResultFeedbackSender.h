//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/_MKPlaceViewControllerFeedbackDelegate-Protocol.h>

@class NSString;
@protocol WBSParsecSearchResultPresentedInCard><WBSCompletionListItem;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate>
{
    id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> _searchResult;
}

@property(readonly, nonatomic) __weak id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> searchResult; // @synthesize searchResult=_searchResult;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)initWithSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

