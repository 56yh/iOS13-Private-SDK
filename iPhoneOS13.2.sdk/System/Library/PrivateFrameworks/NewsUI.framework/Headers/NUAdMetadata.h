//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXPrerollAdMetadata-Protocol.h>

@class NSString;

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata>
{
    NSString *_adImpressionIdentifier;
    NSString *_adCampaignId;
    NSString *_adLineId;
    NSString *_adCreativeId;
}

@property(readonly, nonatomic) NSString *adCreativeId; // @synthesize adCreativeId=_adCreativeId;
@property(readonly, nonatomic) NSString *adLineId; // @synthesize adLineId=_adLineId;
@property(readonly, nonatomic) NSString *adCampaignId; // @synthesize adCampaignId=_adCampaignId;
@property(readonly, nonatomic) NSString *adImpressionIdentifier; // @synthesize adImpressionIdentifier=_adImpressionIdentifier;
- (id)initWithAdImpressionIdentifier:(id)arg1 adCampaignId:(id)arg2 adLineId:(id)arg3 adCreativeId:(id)arg4;

@end
