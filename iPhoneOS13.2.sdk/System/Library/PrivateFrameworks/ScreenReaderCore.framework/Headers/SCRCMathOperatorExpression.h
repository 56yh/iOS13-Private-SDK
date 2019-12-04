//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression
{
    unsigned short _operatorChar;
}

@property(readonly, nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)latexFormatStringAsOver;
- (_Bool)isFenceDelimiter;
- (_Bool)isOperationSymbol;
- (_Bool)isTermSeparator;
- (_Bool)isEllipsis;
- (_Bool)isNaturalSuperscript;
- (_Bool)_isMinusSign;
- (_Bool)_isInvisibleCharacter;
- (_Bool)_isRingOperator;
- (_Bool)canBeUsedWithRange;
- (_Bool)_isSummation;
- (_Bool)_isUnionOrIntersection;
- (_Bool)_isIntegral;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

