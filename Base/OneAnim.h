#ifndef SECAPI_BASE_ONE_ANIM_H
#define SECAPI_BASE_ONE_ANIM_H

class COneAnim
{
public:
  inline COneAnim()
  {
    oa_FrameIndices = NULL;
  }
  inline ~COneAnim()
  {
    ASSERT(oa_FrameIndices != NULL);
    FreeMemory( oa_FrameIndices);
    oa_FrameIndices = NULL;
  }
  inline COneAnim& operator=(const COneAnim& oaAnim)
  {
    ASSERT( oaAnim.oa_NumberOfFrames > 0);
    strcpy(oa_Name, oaAnim.oa_Name);
    oa_SecsPerFrame = oaAnim.oa_SecsPerFrame;
    oa_NumberOfFrames = oaAnim.oa_NumberOfFrames;
    if( oa_FrameIndices != NULL)
    {
      FreeMemory(oa_FrameIndices);
    }
    oa_FrameIndices = (INDEX *) AllocMemory( sizeof(INDEX) * oa_NumberOfFrames);
    for( INDEX iFrame = 0; iFrame<oa_NumberOfFrames; iFrame++)
    {
      oa_FrameIndices[ iFrame] = oaAnim.oa_FrameIndices[ iFrame];
    }
    return *this;
  }
  NAME oa_Name;
  TIME oa_SecsPerFrame;
  INDEX oa_NumberOfFrames;
  INDEX* oa_FrameIndices;
};

#endif
