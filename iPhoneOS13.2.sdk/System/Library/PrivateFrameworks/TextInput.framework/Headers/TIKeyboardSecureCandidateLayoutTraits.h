//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _forceSingleLineLayout;
    unsigned int _headerInliningBehavior;
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInFirstLine;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInFirstAndSecondLines;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInSecondLine;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine; // @synthesize inputTraitsInSecondLine=_inputTraitsInSecondLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines; // @synthesize inputTraitsInFirstAndSecondLines=_inputTraitsInFirstAndSecondLines;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine; // @synthesize inputTraitsInOnlyLine=_inputTraitsInOnlyLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine; // @synthesize headerTraitsInFirstLine=_headerTraitsInFirstLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine; // @synthesize headerTraitsInOnlyLine=_headerTraitsInOnlyLine;
@property(nonatomic) unsigned int headerInliningBehavior; // @synthesize headerInliningBehavior=_headerInliningBehavior;
@property(nonatomic) _Bool forceSingleLineLayout; // @synthesize forceSingleLineLayout=_forceSingleLineLayout;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

