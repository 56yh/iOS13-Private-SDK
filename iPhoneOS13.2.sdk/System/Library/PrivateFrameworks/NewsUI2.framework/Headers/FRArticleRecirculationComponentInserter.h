//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/SXComponentInserter-Protocol.h>

@protocol SXComponentInsertionConditionEngine;

__attribute__((visibility("hidden")))
@interface FRArticleRecirculationComponentInserter : NSObject <SXComponentInserter>
{
    // Error parsing type: , name: autoPlacementProvider
    // Error parsing type: , name: cellStyleProvider
    // Error parsing type: , name: insertionConditionProvider
    // Error parsing type: , name: cellStyle
    // Error parsing type: , name: componentTraits
    // Error parsing type: , name: conditionEngine
    // Error parsing type: , name: inserted
}

- (id)init;
- (void)componentInsertionCompleted;
- (id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (_Bool)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)conditionsForDOMObjectProvider:(id)arg1;
@property(nonatomic, retain) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine;
@property(nonatomic) unsigned long long componentTraits; // @synthesize componentTraits;

@end

