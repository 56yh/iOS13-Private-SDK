//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableDictionary, NSMutableSet, NSSet;

@interface NUAdContextDefinition : NSObject <NSCopying>
{
    NSMutableDictionary *_nestedContextDefinitions;
    NSMutableSet *_mutablePropertyDefinitions;
}

+ (id)definition;
@property(readonly, nonatomic) NSMutableSet *mutablePropertyDefinitions; // @synthesize mutablePropertyDefinitions=_mutablePropertyDefinitions;
@property(readonly, nonatomic) NSMutableDictionary *nestedContextDefinitions; // @synthesize nestedContextDefinitions=_nestedContextDefinitions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isPropertyDefinitionValid:(id)arg1;
@property(readonly, nonatomic) NSSet *propertyDefinitions;
- (void)addPropertyDefinition:(id)arg1;
- (id)init;

@end

