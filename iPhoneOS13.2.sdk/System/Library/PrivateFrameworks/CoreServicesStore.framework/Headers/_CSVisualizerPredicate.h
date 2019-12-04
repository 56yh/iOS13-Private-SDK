//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface _CSVisualizerPredicate : NSPredicate
{
    NSString *_title;
    NSString *_searchString;
    unsigned long long _operator;
    NSPredicate *_numericPredicate;
}

+ (void)getRanges:(vector_7053a16b *)arg1 matchingPredicate:(id)arg2 inDescription:(id)arg3;
+ (id)predicateWithFormatString:(id)arg1 error:(id *)arg2;
+ (id)translateNSPredicate:(id)arg1 error:(id *)arg2;
+ (_Bool)operatorIsNumeric:(unsigned long long)arg1;
+ (id)constantValueForExpression:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)predicateFormat;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (_Bool)evaluateWithObject:(id)arg1;
- (_Bool)getRanges:(vector_7053a16b *)arg1 inDescription:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 searchedInRange:(struct _NSRange *)arg5;
- (_Bool)evaluateNumerically:(id)arg1;
- (id)initWithSearchString:(id)arg1 forTitle:(id)arg2 operator:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithSearchString:(id)arg1 operator:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithExpression:(id)arg1;

@end

