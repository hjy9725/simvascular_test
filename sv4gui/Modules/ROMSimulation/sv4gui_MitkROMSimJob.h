/* Copyright (c) Stanford University, The Regents of the University of
 *               California, and others.
 *
 * All Rights Reserved.
 *
 * See Copyright-SimVascular.txt for additional details.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SV4GUI_MITK_ROM_SIMJOB_H
#define SV4GUI_MITK_ROM_SIMJOB_H

#include <sv4guiModuleROMSimulationExports.h>

#include "sv4gui_ROMSimJob.h"

#include "mitkBaseData.h"

class SV4GUIMODULEROMSIMULATION_EXPORT sv4guiMitkROMSimJob : public mitk::BaseData
{
public:

    class JobBasicParameters {
        public:
            static const std::string FLUID_DENSITY;
            static const std::string FLUID_VISCOSITY;
            static const std::string INITIAL_PRESSURE;
            static const std::string INITIAL_VELOCITIES;
            static const std::vector<std::string> names;
    };

    mitkClassMacro(sv4guiMitkROMSimJob, mitk::BaseData);
    itkFactorylessNewMacro(Self)
    itkCloneMacro(Self)

    virtual void Expand( unsigned int timeSteps = 1 ) override;
//    virtual void ExecuteOperation(mitk::Operation *operation) override;
    virtual bool IsEmptyTimeStep(unsigned int t) const override;
    virtual unsigned int GetTimeSize() const;
    void CalculateBoundingBox(double *bounds,unsigned int t = 0 );

    virtual void UpdateOutputInformation() override;
    virtual void SetRequestedRegionToLargestPossibleRegion() override;
    virtual bool RequestedRegionIsOutsideOfTheBufferedRegion() override;
    virtual bool VerifyRequestedRegion() override;
    virtual void SetRequestedRegion(const itk::DataObject *data) override;

    sv4guiROMSimJob* GetSimJob(unsigned int t=0) const;

    void SetSimJob(sv4guiROMSimJob* job, unsigned int t=0);

    void SetMeshName(std::string meshName);
    std::string GetMeshName() const;

    void SetModelName(std::string modelName);
    std::string GetModelName() const;

    void SetModelOrder(std::string modelOrder);
    std::string GetModelOrder() const;

    std::string GetStatus() const;
    void SetStatus(std::string status);

    bool IsDataModified(){return m_DataModified;}
    void SetDataModified(bool modified = true){m_DataModified=modified;}

  protected:

    mitkCloneMacro(Self);

    sv4guiMitkROMSimJob();
    sv4guiMitkROMSimJob(const sv4guiMitkROMSimJob &other);
    virtual ~sv4guiMitkROMSimJob();

//    virtual void PrintSelf(std::ostream& os, itk::Indent indent) const override;
    virtual void ClearData() override;
    virtual void InitializeEmpty() override;

//    sv4guiSimJob* m_Job;
    std::vector<sv4guiROMSimJob*> m_JobSet;

    bool m_CalculateBoundingBox;

    std::string m_MeshName;

    std::string m_ModelName;

    std::string m_ModelOrder;

    std::string m_Status;

    bool m_DataModified;
};

itkEventMacro( sv4guiMitkROMSimJobEvent, itk::AnyEvent );

#endif 
