//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface SXComponentNode : NSObject
{
    NSString *_componentIdentifier;
    long long _attribute;
    NSMutableSet *_mutableDependencies;
}

@property(retain, nonatomic) NSMutableSet *mutableDependencies; // @synthesize mutableDependencies=_mutableDependencies;
@property(readonly, nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasDependencyToComponentIdentifier:(id)arg1 attribute:(long long)arg2;
@property(readonly, nonatomic) NSSet *dependencies;
- (void)addComponentDependency:(id)arg1;
- (id)initWithComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;

@end

