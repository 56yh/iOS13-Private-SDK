//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class NSDictionary, REScriptToken;

@interface REScriptASTRuleNode : REScriptASTNode
{
    REScriptToken *_type;
    REScriptToken *_name;
    NSDictionary *_options;
    REScriptASTNode *_expression;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) REScriptToken *name; // @synthesize name=_name;
@property(readonly, nonatomic) REScriptToken *type; // @synthesize type=_type;
- (id)dependencies;
- (id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4;

@end
