//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject
{
    NSMapTable *_cache;
}

@property(readonly, nonatomic) NSMapTable *cache; // @synthesize cache=_cache;
- (void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2;
- (id)relatedWebViewForBaseURL:(id)arg1;
- (id)init;

@end

