//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/SXComponent-Protocol.h>
#import <NewsUI2/SXInsertableComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions;
@protocol SXComponentAnchor;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI229ArticleRecirculationComponent : NSObject <SXComponent, SXInsertableComponent>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: type
    // Error parsing type: , name: layout
    // Error parsing type: , name: style
    // Error parsing type: , name: role
    // Error parsing type: , name: anchor
    // Error parsing type: , name: behaviors
    // Error parsing type: , name: animation
    // Error parsing type: , name: classification
    // Error parsing type: , name: additions
    // Error parsing type: , name: analytics
    // Error parsing type: , name: conditions
    // Error parsing type: , name: contentRelevance
    // Error parsing type: , name: traits
    // Error parsing type: , name: conditional
    // Error parsing type: , name: hidden
}

- (id)init;
@property(nonatomic, readonly) _Bool hidden; // @synthesize hidden;
@property(nonatomic, retain) id conditional; // @synthesize conditional;
@property(nonatomic) unsigned long long traits; // @synthesize traits;
@property(nonatomic) unsigned long long contentRelevance; // @synthesize contentRelevance;
@property(nonatomic, retain) SXComponentConditions *conditions; // @synthesize conditions;
@property(nonatomic, retain) id analytics; // @synthesize analytics;
@property(nonatomic, retain) id additions; // @synthesize additions;
@property(nonatomic, retain) SXComponentClassification *classification; // @synthesize classification;
@property(nonatomic, retain) SXComponentAnimation *animation; // @synthesize animation;
@property(nonatomic, retain) id behaviors; // @synthesize behaviors;
@property(nonatomic, retain) id <SXComponentAnchor> anchor; // @synthesize anchor;
@property(nonatomic) int role; // @synthesize role;
@property(nonatomic, copy) NSString *style;
@property(nonatomic, copy) NSString *layout;
@property(nonatomic, copy) NSString *type;
@property(nonatomic, copy) NSString *identifier;

@end

