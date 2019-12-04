//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <USDKit/USKObject.h>

@class NSString, USKToken;

@interface USKProperty : USKObject
{
    struct UsdProperty _property;
}

- (id).cxx_construct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setResourcePathArray:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setObjectPath:(id)arg1;
- (void)setObjectPathArray:(id)arg1;
-     // Error parsing type: v40@0:8^{?=[4]}16Q24d32, name: setDouble4x4Array:count:atTime:
-     // Error parsing type: v32@0:8^{?=[4]}16Q24, name: setDouble4x4Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setDouble4Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setDouble4Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setDouble3Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setDouble3Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setDouble2Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setDouble2Array:count:
- (void)setDoubleArray:(double *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDoubleArray:(double *)arg1 count:(unsigned long long)arg2;
-     // Error parsing type: v40@0:8^{?=[4]}16Q24d32, name: setFloat4x4Array:count:atTime:
-     // Error parsing type: v32@0:8^{?=[4]}16Q24, name: setFloat4x4Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setFloat4Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setFloat4Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setFloat3Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setFloat3Array:count:
-     // Error parsing type: v40@0:8^16Q24d32, name: setFloat2Array:count:atTime:
-     // Error parsing type: v32@0:8^16Q24, name: setFloat2Array:count:
- (void)setFloatArray:(float *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloatArray:(float *)arg1 count:(unsigned long long)arg2;
- (void)setTokenArray:(id)arg1 atTime:(double)arg2;
- (void)setTokenArray:(id)arg1;
- (void)setStringArray:(id)arg1 atTime:(double)arg2;
- (void)setStringArray:(id)arg1;
- (void)setQuatfArray:(struct *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;
- (void)setIntArray:(int *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setIntArray:(int *)arg1 count:(unsigned long long)arg2;
- (void)setQuatfValue:(struct)arg1 atTime:(double)arg2;
- (void)setQuatfValue:(struct)arg1;
- (void)setFloat4Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat4Value: /* Error: Ran out of types for this method. */;
- (void)setFloat3Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat3Value: /* Error: Ran out of types for this method. */;
- (void)setFloat2Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat2Value: /* Error: Ran out of types for this method. */;
- (void)setFloatValue:(float)arg1 atTime:(double)arg2;
- (void)setFloatValue:(float)arg1;
-     // Error parsing type: v152@0:8{?=[4]}16d144, name: setDouble4x4Value:atTime:
-     // Error parsing type: v144@0:8{?=[4]}16, name: setDouble4x4Value:
- (void)setDouble4Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setDouble4Value: /* Error: Ran out of types for this method. */;
- (void)setDouble3Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setDouble3Value: /* Error: Ran out of types for this method. */;
- (void)setDouble2Value:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setDouble2Value: /* Error: Ran out of types for this method. */;
- (void)setDoubleValue:(double)arg1 atTime:(double)arg2;
- (void)setDoubleValue:(double)arg1;
- (void)setIntValue:(int)arg1;
- (void)setBoolValue:(_Bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTokenValue:(id)arg1;
- (void)setData:(id)arg1 atTime:(double)arg2;
- (void)setData:(id)arg1;
-     // Error parsing type: Q40@0:8^{?=[4]}16Q24d32, name: double4x4Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: double4x4Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: double4Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: double4Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: double3Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: double3Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: double2Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: double2Array:maxCount:
- (unsigned long long)doubleArray:(double *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)doubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;
-     // Error parsing type: Q40@0:8^{?=[4]}16Q24d32, name: float4x4Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: float4x4Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: float4Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: float4Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: float3Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: float3Array:maxCount:
-     // Error parsing type: Q40@0:8^16Q24d32, name: float2Array:maxCount:atTime:
-     // Error parsing type: Q32@0:8^16Q24, name: float2Array:maxCount:
- (unsigned long long)floatArray:(float *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)floatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (id)targetObject;
- (id)objectPathArray;
- (id)objectPath;
- (id)tokenArrayAtTime:(double)arg1;
- (id)tokenArray;
- (id)stringArrayAtTime:(double)arg1;
- (id)stringArray;
- (unsigned long long)quatfArray:(struct *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)quatfArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)intArray:(int *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)intArray:(int *)arg1 maxCount:(unsigned long long)arg2;
- (struct)quatfValueAtTime:(double)arg1;
- (struct)quatfValue;
-     // Error parsing type: 24@0:8d16, name: float4ValueAtTime:
-     // Error parsing type: 16@0:8, name: float4Value
-     // Error parsing type: 24@0:8d16, name: float3ValueAtTime:
-     // Error parsing type: 16@0:8, name: float3Value
-     // Error parsing type: 24@0:8d16, name: float2ValueAtTime:
-     // Error parsing type: 16@0:8, name: float2Value
- (float)floatValueAtTime:(double)arg1;
- (float)floatValue;
-     // Error parsing type: {?=[4]}24@0:8d16, name: double4x4ValueAtTime:
-     // Error parsing type: {?=[4]}16@0:8, name: double4x4Value
-     // Error parsing type: 24@0:8d16, name: double4ValueAtTime:
-     // Error parsing type: 16@0:8, name: double4Value
-     // Error parsing type: 24@0:8d16, name: double3ValueAtTime:
-     // Error parsing type: 16@0:8, name: double3Value
-     // Error parsing type: 24@0:8d16, name: double2ValueAtTime:
-     // Error parsing type: 16@0:8, name: double2Value
- (double)doubleValueAtTime:(double)arg1;
- (double)doubleValue;
- (int)intValue;
- (_Bool)boolValue;
- (id)resourcePathArray;
- (id)resourcePath;
- (id)urlValue;
- (id)tokenValue;
- (id)stringValue;
- (id)timeSamples;
- (_Bool)isAnimated;
- (id)dataAtTime:(double)arg1;
- (id)data;
- (_Bool)setConnectionWithTargetPaths:(id)arg1;
- (id)connectedPropertyPaths;
- (id)connectedPropertyPath;
- (id)customMetadataWithKey:(id)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (id)metadataWithKey:(id)arg1;
- (_Bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (_Bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (_Bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (id)metadata;
- (struct UsdProperty)usdProperty;
- (id)path;
- (id)name;
- (unsigned long long)arraySizeAtTime:(double)arg1;
- (unsigned long long)arraySize;
- (id)parentNode;
- (id)initWithUsdProperty:(struct UsdProperty)arg1;
@property(readonly, nonatomic) USKToken *roleName;
@property(readonly, nonatomic) NSString *role;
@property(readonly, nonatomic) USKToken *typeName;
@property(readonly, nonatomic) NSString *type;

@end

