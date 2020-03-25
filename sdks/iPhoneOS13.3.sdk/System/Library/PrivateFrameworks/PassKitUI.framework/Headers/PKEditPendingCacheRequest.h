//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPass;

@interface PKEditPendingCacheRequest : NSObject
{
    BOOL _fullPass;
    BOOL _stacked;
    NSString *_cacheKey;
    PKPass *_pass;
    long long _priority;
    NSArray *_completionHandlers;
    CGSize _imageSize;
}

@property(retain, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) BOOL stacked; // @synthesize stacked=_stacked;
@property(nonatomic) BOOL fullPass; // @synthesize fullPass=_fullPass;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end
