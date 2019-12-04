//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRNMS : NSObject
{
    unsigned long long secondRoundNMSOnLines;
    struct deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float>>> _wordForests;
    struct PyramidTokenizer<unsigned short, float> _wordTokenizer;
    struct PyramidNMS<unsigned short, float, unsigned char> _wordNMS;
    struct deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float>>> _postWordNMSForests;
    struct PyramidNMS<unsigned short, float, unsigned char> _lineNMS;
    struct deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float>>> _postLineNMSForests;
    struct PyramidTokenizer<unsigned short, float> _lineTokenizer;
}

- (id).cxx_construct;
- (void)fillRectForestDatum:(slice_array_409c861c *)arg1 withCGRect:(const struct CGRect *)arg2;
- (_Bool)fillRectForestDatum:(slice_array_409c861c *)arg1 withRect:(const Rect__0538c5d4 *)arg2 normalizedByPlaneWidth:(unsigned long long)arg3 andPlaneHeight:(unsigned long long)arg4;
- (id)buildTextFeaturesFromRectForest:(const RectForest_e546815d *)arg1 byEdge:(unsigned long long)arg2 options:(id)arg3;
- (void)fillTextFeature:(id)arg1 withRectDatum:(const valarray_6968ec29 *)arg2;
- (_Bool)buildRectForest:(RectForest_e546815d *)arg1 fromTextFeatures:(id)arg2 options:(id)arg3;
- (_Bool)buildRectForest:(RectForest_e546815d *)arg1 fromDocument:(struct Document *)arg2 withIncludedCandidates:(const vector_a7cf9eda *)arg3 options:(id)arg4;
- (unsigned long long)tokenizeTextFeature:(id)arg1 intoCutpoints:(deque_534810ca *)arg2 options:(id)arg3;
- (unsigned long long)convertSubTextFeatures:(id)arg1 toRects:(valarray_6968ec29 *)arg2;
- (id)generateConsolidatedTextFeatures:(id)arg1;
- (_Bool)addTextFeatures:(id)arg1 options:(id)arg2;
- (_Bool)addDocument:(struct Document *)arg1 withIncludedCandidates:(const vector_a7cf9eda *)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

