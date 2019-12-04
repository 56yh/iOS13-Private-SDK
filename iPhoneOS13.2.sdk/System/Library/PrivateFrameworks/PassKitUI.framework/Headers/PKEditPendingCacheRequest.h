//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPass;

@interface PKEditPendingCacheRequest : NSObject
{
    _Bool _fullPass;
    _Bool _stacked;
    NSString *_cacheKey;
    PKPass *_pass;
    long long _priority;
    NSArray *_completionHandlers;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool stacked; // @synthesize stacked=_stacked;
@property(nonatomic) _Bool fullPass; // @synthesize fullPass=_fullPass;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

