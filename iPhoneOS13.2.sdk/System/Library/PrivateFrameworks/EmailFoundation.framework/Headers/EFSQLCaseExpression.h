//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class NSMapTable, NSString;
@protocol EFSQLExpressable;

@interface EFSQLCaseExpression : NSObject <EFSQLExpressable>
{
    id <EFSQLExpressable> _elseExpression;
    id <EFSQLExpressable> _baseExpression;
    NSMapTable *_whenExpressions;
}

@property(readonly, nonatomic) NSMapTable *whenExpressions; // @synthesize whenExpressions=_whenExpressions;
@property(readonly, nonatomic) id <EFSQLExpressable> baseExpression; // @synthesize baseExpression=_baseExpression;
@property(retain, nonatomic) id <EFSQLExpressable> elseExpression; // @synthesize elseExpression=_elseExpression;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithBaseExpression:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

