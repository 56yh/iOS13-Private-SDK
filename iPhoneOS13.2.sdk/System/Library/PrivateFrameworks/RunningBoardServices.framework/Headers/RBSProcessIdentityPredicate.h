//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl
{
    RBSProcessIdentity *_identity;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;
- (id)initWithIdentity:(id)arg1;

@end

