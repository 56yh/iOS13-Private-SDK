//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol SBLayoutElementDescriptor <NSObject>
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) NSUInteger layoutAttributes;
@property(readonly, nonatomic) NSUInteger supportedLayoutRoles;
@property(readonly, nonatomic) long long layoutRole;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (BOOL)hasLayoutAttributes:(NSUInteger)arg1;
- (BOOL)supportsLayoutRole:(long long)arg1;
@end

