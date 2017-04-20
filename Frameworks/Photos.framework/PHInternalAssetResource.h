/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHInternalAssetResource : PHAssetResource <PHCPLAssetResource> {
    NSString * _assetLocalIdentifier;
    unsigned int  _cplResourceType;
    id  _fileReservation;
    PHSandboxExtensionWrapper * _sandboxExtensionWrapper;
}

@property (nonatomic, readonly) unsigned int cplResourceType;
@property (nonatomic, retain) id fileReservation;
@property (setter=_setSandboxExtensionWrapper:, nonatomic, retain) PHSandboxExtensionWrapper *sandboxExtensionWrapper;

+ (BOOL)_isResourceFileCreatedOnDemandWithType:(int)arg1 asset:(id)arg2;
+ (id)resourceForType:(int)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;

- (void).cxx_destruct;
- (void)_acquireSandboxExtensionIfNeeded;
- (void)_fixupOriginalFilename;
- (void)_fixupUTI;
- (BOOL)_inconsistentTypeAndUTIOrMissingFileWithShouldCheckFileExistence:(BOOL)arg1;
- (id /* block */)_onDemandFileLoaderForResourceType:(int)arg1 asset:(id)arg2;
- (void)_populateFromAsset:(id)arg1;
- (void)_populateFromAssetAlternatePath:(id)arg1 alternatePath:(id)arg2 assetResourceType:(int)arg3;
- (BOOL)_populateFromManagedAsset:(id)arg1 usingCPLType:(unsigned int)arg2;
- (void)_populateFromManagedAssetSidecar:(id)arg1 utiHint:(id)arg2;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (void)_setSandboxExtensionWrapper:(id)arg1;
- (void)_unpin;
- (int)analysisType;
- (id)assetLocalIdentifier;
- (unsigned int)cplResourceType;
- (void)dealloc;
- (id)description;
- (BOOL)fileExists;
- (id)fileReservation;
- (id)initWithResourceType:(int)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;
- (BOOL)isLibraryAssetResource;
- (BOOL)pin;
- (id)sandboxExtensionWrapper;
- (void)setFileReservation:(id)arg1;

@end