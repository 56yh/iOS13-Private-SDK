//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSArray, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching>
{
    id <HFServiceTreeMatching> _rootServicePredicate;
    NSArray *_childServicePredicates;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) NSArray *childServicePredicates; // @synthesize childServicePredicates=_childServicePredicates;
@property(readonly, nonatomic) id <HFServiceTreeMatching> rootServicePredicate; // @synthesize rootServicePredicate=_rootServicePredicate;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;
- (id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

