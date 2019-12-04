//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLGeneratorPredicateNode-Protocol.h>

@class NSArray, NSString;
@protocol EFSQLExpressable;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode>
{
    NSArray *_keypathGenerators;
    unsigned long long _predicateOperator;
    id <EFSQLExpressable> _constValue;
}

@property(readonly, nonatomic) id <EFSQLExpressable> constValue; // @synthesize constValue=_constValue;
@property(readonly, nonatomic) unsigned long long predicateOperator; // @synthesize predicateOperator=_predicateOperator;
@property(readonly, nonatomic) NSArray *keypathGenerators; // @synthesize keypathGenerators=_keypathGenerators;
- (void)traverseTreeWithAliasMap:(id)arg1;
- (id)sqlExpressableWithTableExpressions:(id)arg1;
- (id)initWithKeypathGenerators:(id)arg1 predicateOperator:(unsigned long long)arg2 constValue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
