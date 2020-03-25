//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDFill, TSDShadow, TSDStroke, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSWPCharacterAdornmentState : NSObject
{
    BOOL _fillsCurrentTextContainer;
    TSDFill *_currentAdornmentFill;
    TSUSparseArray *_currentFillPaths;
    TSUSparseArray *_currentRubyFillPaths;
    TSDShadow *_currentFillShadow;
    TSDStroke *_currentAdornmentStroke;
    TSUSparseArray *_currentStrokePaths;
    TSUSparseArray *_currentRubyStrokePaths;
    TSDShadow *_currentStrokeShadow;
    _NSRange _currentFillRange;
    _NSRange _currentStrokeRange;
    CGRect _currentFillRect;
    CGRect _currentStrokeRect;
}

+ (id)p_deepCopyPathArray:(id)arg1;
@property(retain, nonatomic) TSDShadow *currentStrokeShadow; // @synthesize currentStrokeShadow=_currentStrokeShadow;
@property(retain, nonatomic) TSUSparseArray *currentRubyStrokePaths; // @synthesize currentRubyStrokePaths=_currentRubyStrokePaths;
@property(retain, nonatomic) TSUSparseArray *currentStrokePaths; // @synthesize currentStrokePaths=_currentStrokePaths;
@property(nonatomic) CGRect currentStrokeRect; // @synthesize currentStrokeRect=_currentStrokeRect;
@property(nonatomic) _NSRange currentStrokeRange; // @synthesize currentStrokeRange=_currentStrokeRange;
@property(retain, nonatomic) TSDStroke *currentAdornmentStroke; // @synthesize currentAdornmentStroke=_currentAdornmentStroke;
@property(nonatomic) BOOL fillsCurrentTextContainer; // @synthesize fillsCurrentTextContainer=_fillsCurrentTextContainer;
@property(retain, nonatomic) TSDShadow *currentFillShadow; // @synthesize currentFillShadow=_currentFillShadow;
@property(retain, nonatomic) TSUSparseArray *currentRubyFillPaths; // @synthesize currentRubyFillPaths=_currentRubyFillPaths;
@property(retain, nonatomic) TSUSparseArray *currentFillPaths; // @synthesize currentFillPaths=_currentFillPaths;
@property(nonatomic) CGRect currentFillRect; // @synthesize currentFillRect=_currentFillRect;
@property(nonatomic) _NSRange currentFillRange; // @synthesize currentFillRange=_currentFillRange;
@property(retain, nonatomic) TSDFill *currentAdornmentFill; // @synthesize currentAdornmentFill=_currentAdornmentFill;
// - (void).cxx_destruct;
- (void)setStateWithFill:(id)arg1 range:(_NSRange)arg2 rect:(CGRect)arg3 paths:(id)arg4 rubyPaths:(id)arg5 shadow:(id)arg6 fillsCurrentTextContainer:(BOOL)arg7;
- (void)setStateWithStroke:(id)arg1 range:(_NSRange)arg2 rect:(CGRect)arg3 paths:(id)arg4 rubyPaths:(id)arg5 shadow:(id)arg6;
- (id)init;

@end
