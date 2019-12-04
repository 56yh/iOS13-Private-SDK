//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKSecureSerializationHelper : NSObject
{
}

+ (id)_callXPCServiceProxyWithInputData:(id)arg1 andSelector:(SEL)arg2;
+ (id)insecurelyConvertLegacyTextAttributeDataToRTFData:(id)arg1;
+ (id)_securelyConvertLegacyTextAttributeDataToRTFData:(id)arg1;
+ (id)insecurelyConvertLegacyAnnotationArchiveToRTFArchive:(id)arg1;
+ (id)_securelyConvertLegacyAnnotationArchiveToRTFArchive:(id)arg1;
+ (id)insecurelyConvertLegacyModelControllerArchive:(id)arg1;
+ (id)_unsafeLegacyDecodeTextAttributesFromData:(id)arg1;
+ (id)_decodeTextAttributesFromRTFData:(id)arg1;
+ (id)_encodeTextAttributesAsRTFData:(id)arg1;
+ (id)_decodeAttributedStringFromRTFData:(id)arg1;
+ (id)_encodeAttributedStringAsRTFData:(id)arg1;
+ (void)_decodeLegacyTextPropertiesWithSecureCoder:(id)arg1 annotationTextRTF:(id *)arg2 typingAttributesRTF:(id *)arg3;
+ (void)_decodeRTFTextPropertiesWithSecureCoder:(id)arg1 annotationTextRTF:(id *)arg2 typingAttributesRTF:(id *)arg3;
+ (void)_unsafeLegacyDecodeTextPropertiesForAnnotation:(id)arg1 withNonSecureCoder:(id)arg2;
+ (void)_decodeTextPropertiesForAnnotation:(id)arg1 withSecureCoder:(id)arg2;
+ (id)decodeTextAttributes:(id)arg1;
+ (id)encodeTextAttributes:(id)arg1;
+ (id)decodeFont:(id)arg1;
+ (id)encodeFont:(id)arg1;
+ (id)decodeColor:(id)arg1;
+ (id)encodeColor:(id)arg1;
+ (void)decodeTextPropertiesOfAnnotation:(id)arg1 withSecureCoder:(id)arg2;
+ (void)encodeTextPropertiesOfAnnotation:(id)arg1 withCoder:(id)arg2;
+ (id)convertLegacyModelControllerArchive:(id)arg1;
+ (id)secureCodingCompliantObjectForData:(id)arg1 ofClasses:(id)arg2 withOptionalKey:(id)arg3;
+ (id)dataForSecureCodingCompliantObject:(id)arg1 withOptionalKey:(id)arg2;

@end

