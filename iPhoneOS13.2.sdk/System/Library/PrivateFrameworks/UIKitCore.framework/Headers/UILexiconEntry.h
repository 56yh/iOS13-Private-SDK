//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface UILexiconEntry : NSObject <NSCopying>
{
    NSString *_userInput;
    NSString *_documentText;
}

+ (id)_entryWithTILexiconEntry:(id)arg1;
@property(readonly, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(readonly, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

