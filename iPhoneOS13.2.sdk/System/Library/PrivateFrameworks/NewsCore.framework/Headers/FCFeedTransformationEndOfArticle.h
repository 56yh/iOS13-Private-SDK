//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;
@protocol FCPurchaseProviderType;

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming>
{
    unsigned long long _minimumResultHeadlineCount;
    double _paidHeadlineRatio;
    unsigned long long _maxiumInaccessibleHeadlineCount;
    id <FCPurchaseProviderType> _purchaseProvider;
}

+ (id)transformationWithConfiguration:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) id <FCPurchaseProviderType> purchaseProvider; // @synthesize purchaseProvider=_purchaseProvider;
@property(nonatomic) unsigned long long maxiumInaccessibleHeadlineCount; // @synthesize maxiumInaccessibleHeadlineCount=_maxiumInaccessibleHeadlineCount;
@property(nonatomic) double paidHeadlineRatio; // @synthesize paidHeadlineRatio=_paidHeadlineRatio;
@property(nonatomic) unsigned long long minimumResultHeadlineCount; // @synthesize minimumResultHeadlineCount=_minimumResultHeadlineCount;
- (id)transformHeadlines:(id)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformItems:(id)arg1 isPaidBlock:(id /* block */)arg2 sourceChannelIDProvider:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

