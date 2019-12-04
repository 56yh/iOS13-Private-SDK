//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    NSData *_accountFlagsData;
    CPLMomentShare *_momentShare;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property(copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

