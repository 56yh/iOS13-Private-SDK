//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class NSArray, NSString;

@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_tokenColumns;
    NSArray *_transcriptionPaths;
    NSArray *_transcriptionPathScores;
}

+ (id)tokenizedTextResultWithString:(id)arg1 strokeIndexes:(id)arg2;
+ (long long)_characterCountInToken:(id)arg1 filteringCharacterSet:(id)arg2 filteredCharacterCount:(long long *)arg3;
+ (pair_b2618ff2)_scoreMeanAndStdForToken:(id)arg1 forLocale:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *transcriptionPathScores; // @synthesize transcriptionPathScores=_transcriptionPathScores;
@property(readonly, copy, nonatomic) NSArray *transcriptionPaths; // @synthesize transcriptionPaths=_transcriptionPaths;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTokenizedTextResult:(id)arg1;
- (void)enumerateTokensInTranscriptionPath:(id)arg1 columnRange:(struct _NSRange)arg2 tokenProcessingBlock:(id /* block */)arg3;
- (long long)_tokenCountInTranscriptionPath:(id)arg1 columnRange:(struct _NSRange)arg2;
- (id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)arg1;
- (id)legacyTextRecognitionResults;
- (_Bool)_isGibberishToken:(id)arg1;
- (double)_normalizedLanguageFitness:(double)arg1;
- (double)languageFitnessForTranscriptionPath:(id)arg1 locale:(id)arg2 recognitionMode:(int)arg3;
- (double)languageFitnessForLocale:(id)arg1 recognitionMode:(int)arg2;
- (_Bool)isValid;
- (id)strokeIndexesForColumnsInRange:(struct _NSRange)arg1;
- (id)precedingSeparatorForToken:(id)arg1;
- (id)precedingSeparatorForTopTranscriptionPath;
- (_Bool)_shouldFilterOutStringForToken:(id)arg1 isGibberish:(_Bool *)arg2;
- (id)transcriptionWithPath:(id)arg1 columnRange:(struct _NSRange)arg2 filterLowConfidence:(_Bool)arg3 excludeGibberish:(_Bool)arg4 rejectionRate:(double *)arg5 tokenProcessingBlock:(id /* block */)arg6;
- (id)transcriptionWithPath:(id)arg1 columnRange:(struct _NSRange)arg2 filterLowConfidence:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *topTranscription;
- (id)tokenAtLocation:(CDStruct_2ec95fd7)arg1;
- (id)tokensInTranscriptionPath:(id)arg1 atColumnIndex:(long long)arg2;
- (id)tokenRowsAtColumnIndex:(long long)arg1;
@property(readonly, nonatomic) long long tokenColumnCount;
- (id)tokenColumns;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3;
- (id)init;

@end

