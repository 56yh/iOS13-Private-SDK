//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming>
{
    id <FCFeedTransforming> _feedItemTransformation;
}

@property(retain, nonatomic) id <FCFeedTransforming> feedItemTransformation; // @synthesize feedItemTransformation=_feedItemTransformation;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFeedItemTransformation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

