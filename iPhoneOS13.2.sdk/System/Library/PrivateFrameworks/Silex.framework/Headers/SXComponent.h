//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;
@protocol SXComponentAnchor;

@interface SXComponent : SXJSONObject <SXComponent>
{
    SXComponentAnimation *backingAnimation;
    SXComponentClassification *_classification;
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;
@property(retain, nonatomic) SXComponentAnimation *backingAnimation; // @synthesize backingAnimation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) SXComponentClassification *classification; // @synthesize classification=_classification;
- (unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2;
- (id)animationWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions; // @dynamic additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @dynamic analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor; // @dynamic anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation; // @dynamic animation;
@property(readonly, nonatomic) SXJSONArray *behaviors; // @dynamic behaviors;
@property(readonly, nonatomic) SXJSONArray *conditional; // @dynamic conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions; // @dynamic conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance; // @dynamic contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool hidden; // @dynamic hidden;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *layout; // @dynamic layout;
@property(readonly, nonatomic) NSString *style; // @dynamic style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

