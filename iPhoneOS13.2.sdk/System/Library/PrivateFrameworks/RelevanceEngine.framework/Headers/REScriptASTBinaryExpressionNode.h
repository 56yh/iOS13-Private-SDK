//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTBinaryExpressionNode : REScriptASTNode
{
    REScriptToken *_binaryOperator;
    REScriptASTNode *_expression;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
@property(readonly, nonatomic) REScriptToken *binaryOperator; // @synthesize binaryOperator=_binaryOperator;
- (id)dependencies;
- (id)initWithOperator:(id)arg1 expression:(id)arg2;

@end

