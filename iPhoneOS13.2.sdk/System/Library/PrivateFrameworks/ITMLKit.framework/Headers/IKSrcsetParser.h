//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface IKSrcsetParser : NSObject
{
    NSArray *_srcsetRules;
}

@property(readonly, nonatomic) NSURL *resolvedURL;
- (id)initWithSrcsetStr:(id)arg1 defaultStr:(id)arg2;

@end

