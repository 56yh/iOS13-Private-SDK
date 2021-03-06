//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REContentRankerProperties-Protocol.h>

@class NSString;

@interface REContentRanker : NSObject <REContentRankerProperties>
{
    struct REContentFeatureExtractor _extractor;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *negativeContent;
@property(readonly, nonatomic) NSString *positiveContent;
- (long long)negativeMapSize;
- (long long)positiveMapSize;
- (id)predict:(id)arg1;
- (BOOL)train:(id)arg1 isPositive:(BOOL)arg2;
- (BOOL)save:(id)arg1 error:(id )arg2;
- (BOOL)load:(id)arg1 error:(id )arg2;
- (id)init;

@end

