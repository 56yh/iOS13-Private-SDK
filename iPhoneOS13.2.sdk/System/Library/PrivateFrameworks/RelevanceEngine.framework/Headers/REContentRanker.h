//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REContentRankerProperties-Protocol.h>

@class NSString;

@interface REContentRanker : NSObject <REContentRankerProperties>
{
    struct REContentFeatureExtractor _extractor;
}

- (id).cxx_construct;
@property(readonly, nonatomic) NSString *negativeContent;
@property(readonly, nonatomic) NSString *positiveContent;
- (long long)negativeMapSize;
- (long long)positiveMapSize;
- (id)predict:(id)arg1;
- (_Bool)train:(id)arg1 isPositive:(_Bool)arg2;
- (_Bool)save:(id)arg1 error:(id *)arg2;
- (_Bool)load:(id)arg1 error:(id *)arg2;
- (id)init;

@end

