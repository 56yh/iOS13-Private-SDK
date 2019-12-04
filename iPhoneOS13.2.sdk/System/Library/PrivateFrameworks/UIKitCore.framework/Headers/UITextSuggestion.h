//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, TIKeyboardCandidate;

@interface UITextSuggestion : NSObject <NSCopying>
{
    _Bool _displayStylePlain;
    _Bool __shouldPersist;
    NSString *_inputText;
    NSString *_searchText;
    NSString *_displayText;
    NSString *_headerText;
}

+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;
+ (id)textSuggestionWithInputText:(id)arg1;
@property(readonly, nonatomic) _Bool _shouldPersist; // @synthesize _shouldPersist=__shouldPersist;
@property(nonatomic) _Bool displayStylePlain; // @synthesize displayStylePlain=_displayStylePlain;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;

@end

