//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying>
{
    NSArray *_assertions;
    NSArray *_invalidations;
}

+ (id)emptyResult;
@property(readonly, copy, nonatomic) NSArray *invalidations; // @synthesize invalidations=_invalidations;
@property(readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resultCombiningWithResult:(id)arg1;
- (id)initWithAssertions:(id)arg1 invalidations:(id)arg2;

@end

