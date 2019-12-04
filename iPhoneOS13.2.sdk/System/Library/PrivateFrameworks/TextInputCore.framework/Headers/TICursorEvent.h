//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class NSString;

@interface TICursorEvent : TIUserAction
{
    _Bool _isSelection;
    _Bool _extendsPriorWord;
    NSString *_inWord;
    unsigned long long _selectionLocation;
    struct _NSRange _inWordRange;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long selectionLocation; // @synthesize selectionLocation=_selectionLocation;
@property(nonatomic) struct _NSRange inWordRange; // @synthesize inWordRange=_inWordRange;
@property(copy, nonatomic) NSString *inWord; // @synthesize inWord=_inWord;
@property(nonatomic) _Bool extendsPriorWord; // @synthesize extendsPriorWord=_extendsPriorWord;
@property(nonatomic) _Bool isSelection; // @synthesize isSelection=_isSelection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;

@end

