//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AKURLRequestApprover : NSObject
{
    NSArray *_whiteListedPaths;
}

- (_Bool)_matchInputAgainstPaths:(id)arg1;
- (_Bool)shouldAllowRequest:(id)arg1;
- (id)initWithWhitelistedPaths:(id)arg1;

@end

