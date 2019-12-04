//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@class NSArray, NSObject, NSString;
@protocol OS_xpc_object;

@interface RBSHereditaryGrant : RBSGrant
{
    struct NSString *_endowmentNamespace;
    NSString *_sourceEnvironment;
    NSObject<OS_xpc_object> *_encodedEndowment;
    NSArray *_attributes;
}

+ (id)grantWithNamespace:(struct NSString *)arg1 sourceEnvironment:(id)arg2 endowment:(struct NSObject *)arg3 attributes:(id)arg4;
+ (id)grantWithNamespace:(struct NSString *)arg1 sourceEnvironment:(id)arg2 attributes:(id)arg3;
+ (id)grantWithNamespace:(struct NSString *)arg1 endowment:(struct NSObject *)arg2 attributes:(id)arg3;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, copy, nonatomic) NSString *sourceEnvironment; // @synthesize sourceEnvironment=_sourceEnvironment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
- (id)_initWithNamespace:(struct NSString *)arg1 sourceEnvironment:(id)arg2 endowment:(struct NSObject *)arg3 attributes:(id)arg4;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

