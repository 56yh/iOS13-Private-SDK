//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPUISearchViewController;

@interface SPUIPPTTypingHelper : NSObject
{
    double _timeSinceLastFire;
    SPUISearchViewController *_searchViewController;
    NSString *_queryString;
    NSString *_currentQueryString;
    id /* block */ _completion;
}

@property(copy) id /* block */ completion; // @synthesize completion=_completion;
@property(retain) NSString *currentQueryString; // @synthesize currentQueryString=_currentQueryString;
@property(retain) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property double timeSinceLastFire; // @synthesize timeSinceLastFire=_timeSinceLastFire;
- (void)fire:(id)arg1;
- (id)initWithString:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;

@end

