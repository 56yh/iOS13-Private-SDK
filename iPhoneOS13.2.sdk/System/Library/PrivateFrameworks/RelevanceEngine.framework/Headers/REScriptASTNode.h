//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, REScriptToken;

@interface REScriptASTNode : NSObject
{
    REScriptToken *_token;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) REScriptToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSSet *dependencies;
- (id)initWithToken:(id)arg1;

@end

