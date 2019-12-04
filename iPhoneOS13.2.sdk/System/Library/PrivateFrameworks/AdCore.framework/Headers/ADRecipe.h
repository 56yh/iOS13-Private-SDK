//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ADRecipe : NSObject
{
    _Bool _isMissingRequiredData;
    NSString *_experimentID;
    NSDictionary *_translationMap;
    NSArray *_testWeights;
    NSNumber *_scalingRatio;
}

@property(nonatomic) _Bool isMissingRequiredData; // @synthesize isMissingRequiredData=_isMissingRequiredData;
@property(retain, nonatomic) NSNumber *scalingRatio; // @synthesize scalingRatio=_scalingRatio;
@property(retain, nonatomic) NSArray *testWeights; // @synthesize testWeights=_testWeights;
@property(retain, nonatomic) NSDictionary *translationMap; // @synthesize translationMap=_translationMap;
@property(retain, nonatomic) NSString *experimentID; // @synthesize experimentID=_experimentID;
- (id)translationWeights:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

